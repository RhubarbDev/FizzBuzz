using System;

namespace FizzBuzzz
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] fizz = { 3 };
            int[] buzz = { 5 };
            for (int i = 1; i <= 100; i++)
            {
                bool f = false;
                bool b = false;

                foreach (int x in fizz)
                {
                    if (i % x == 0) { f = true; }
                }
                foreach (int y in buzz)
                {
                    if (i % y == 0) { b = true; }
                }

                if (f) { Console.Write("Fizz"); }
                if (b) { Console.Write("Buzz"); }
                if (!f && !b) { Console.Write(i); }
                Console.Write("\n");
            } 
        }
    }
}
