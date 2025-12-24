using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
using System.Linq;

public class Codetree
{
    public static void Main()
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        var sb = new StringBuilder();

        var inputs = sr.ReadLine().Split(' ');
        var n = int.Parse(inputs[0]);
        var m = int.Parse(inputs[1]);

        var posA = new List<int>();
        var posB = new List<int>();

        for(var i = 0; i < n; i++)
        {
            var line = sr.ReadLine().Split(' ');
            var x = int.Parse(line[0]);
            var dir = line[1];
            
            var cur = posA.LastOrDefault();
            for(var j = 0; j < x; j++)
            {
                if(dir == "L") cur--;
                else cur++;

                posA.Add(cur);
            }
        }

        for(var i = 0; i < m; i++)
        {
            var line = sr.ReadLine().Split(' ');
            var x = int.Parse(line[0]);
            var dir = line[1];

            var cur = posB.LastOrDefault();
            for(var j = 0; j < x; j++)
            {
                if(dir == "L") cur--;
                else cur++;

                posB.Add(cur);
            }
        }

        if(posA.Count != posB.Count)
        {
            if(posA.Count > posB.Count)
            {
                var ex = posB.LastOrDefault();
                posB.Add(ex);
            }
            else if(posA.Count < posB.Count)
            {
                var ex = posA.LastOrDefault();
                posA.Add(ex);
            }
        }

        int max = Math.Max(posA.Count, posB.Count);
        int cnt = 0;

        for(var i = 1; i < max; i++)
        {
            var a = Math.Min(i, posA.Count - 1);
            var b = Math.Min(i, posB.Count - 1);

            if(posA[a] == posB[b])
            {
                if(posA[a-1] != posB[b-1])
                {
                    cnt++;
                }
            }
        }

        sb.Append($"{cnt}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}