using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;


namespace server
{
    internal class Program
    {
        static int lastAssignedGlobalID;

        static void Main(string[] args)
        {
           
            int recv;
            byte[] data = new byte[1024];

            string hi = "Yep, you just connected!";
            string IPaddress = "127.0.0.1";
            IPAddress address = IPAddress.Parse(IPaddress);
            int port = 9050;

            IPEndPoint ipep = new IPEndPoint(address, port);

            Socket newsock = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);

            newsock.Bind(ipep);

            Console.WriteLine("Socket open...");

            IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
            EndPoint remote = (EndPoint)(sender);

            while (true)
            {
                try
                {
                    recv = newsock.ReceiveFrom(data, ref remote);

                    //string message = Encoding.ASCII.GetString(data, 0, recv);
                    //string[] strings = message.Split('/');

                    //for (int i = 0; i < strings.Length; i++)
                    //{
                    //    Console.WriteLine(strings[i]);
                    //}



                    Console.WriteLine("Message received from " + remote.ToString());

                    Console.WriteLine(Encoding.ASCII.GetString(data, 0, recv));


                    //Remember we need to convert anything to bytes to send it across the network to the client
                    data = Encoding.ASCII.GetBytes(hi);

                    //Send the bytes for the ‘hi’ string to the remote that just connected. 
                    //First parameter is the data, 2nd is packet size, 3rd is any flags we want,
                    //and 4th is destination client (which was saved when ReceiveFrom() is called)
                    newsock.SendTo(data, data.Length, SocketFlags.None, remote);
                }
                catch (Exception ex) { }
                
            }

        }


    }

}