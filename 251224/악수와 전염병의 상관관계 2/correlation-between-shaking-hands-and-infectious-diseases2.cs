using System;
using System.IO;
using System.Text;
using System.Linq;
using System.Collections.Generic;

public class Codetree
{
    public static void Main()
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        var sb = new StringBuilder();

        var inputs = sr.ReadLine().Split(' ');
        var n = int.Parse(inputs[0]);
        var k = int.Parse(inputs[1]);
        var p = int.Parse(inputs[2]);
        var t = int.Parse(inputs[3]);

        var infected = new int[n];
        var infectedCnt = new int[n];

        for (int i = 0; i < n; i++)
        {
            if(i != p - 1) continue;

            infected[i] = 1;
            infectedCnt[i] = k;
        }

        var times = new SortedList<int, (int, int)>();

        for (var i = 0; i < t; i++)
        {
            var line = sr.ReadLine().Split(' ');

            var t_ = int.Parse(line[0]);
            var x = int.Parse(line[1]) - 1;
            var y = int.Parse(line[2]) - 1;
            
            times.Add(t_, (x, y));
        }

        foreach(var kvp in times)
        {
            var value = kvp.Value;

            var x = value.Item1;
            var y = value.Item2;
            var now = false;

            if (infected[x] > 0)
            {
                if(infectedCnt[x] > 0)
                {
                    infectedCnt[x]--;

                    if(infected[y] != 1)
                    {
                        infected[y] = 1;
                        infectedCnt[y] = k;
                        now = true;
                    }
                }
            }
        
            if (now) continue;

            if (infected[y] > 0)
            {
                if(infectedCnt[y] > 0)
                {
                    infectedCnt[y]--;


                    if(infected[x] != 1)
                    {
                        infected[x] = 1;
                        infectedCnt[x] = k;
                    }
                }
            }

            // sw.WriteLine($"{x}:{infected[x]},{infectedCnt[x]} | {y}:{infected[y]},{infectedCnt[y]}");
        }
        
        for (int i = 0; i < infected.Length; i++)
        {
            sb.Append($"{infected[i]}");
        }

        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}