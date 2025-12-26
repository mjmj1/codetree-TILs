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
        var m = int.Parse(inputs[1]);

        var posA = new List<int>();
        var posB = new List<int>();

        for(var i = 0; i < n; i++)
        {
            var line = sr.ReadLine().Split(' ');
            var v = int.Parse(line[0]);
            var t = int.Parse(line[1]);

            var cur = posA.LastOrDefault();
            for(var j = 0; j < t; j++)
            {
                cur += v;
                posA.Add(cur);
            }
        }

        for(var i = 0; i < m; i++)
        {
            var line = sr.ReadLine().Split(' ');
            var v = int.Parse(line[0]);
            var t = int.Parse(line[1]);

            var cur = posB.LastOrDefault();
            for(var j = 0; j < t; j++)
            {
                cur += v;
                posB.Add(cur);
            }
        }
        
        var prev = -1;
        var first = -1;
        var cnt = 1;

        if(posA[0] > posB[0])
        {
            prev = 0;
        }
        else if(posA[0] < posB[0])
        {
            prev = 1;
        }
        else
        {
            prev = 2;
        }
        
        for(var i = 1; i < posA.Count; i++)
        {
            if(posA[i] > posB[i])
            {
                first = 0;
            }
            else if(posA[i] < posB[i])
            {
                first = 1;
            }
            else
            {
                first = 2;
            }

            if(prev != first)
            {
                cnt++;
            }

            prev = first;
        }

        sb.Append($"{cnt}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}