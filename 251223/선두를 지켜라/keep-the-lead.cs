using System;
using System.IO;
using System.Text;
using System.Collections.Generic;

public class Codetree
{
    public static void Main()
    {
        StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        StringBuilder sb = new StringBuilder();

        var line = sr.ReadLine().Split(' ');
        var n = int.Parse(line[0]);
        var m = int.Parse(line[1]);

        var posA = new List<int>();
        var posB = new List<int>();

        var cur = 0;

        for (int i = 0; i < n; i++)
        {
            var vt = sr.ReadLine().Split(' ');
            var v = int.Parse(vt[0]);
            var t = int.Parse(vt[1]);

            var c = v / t;
            
            for (int j = 0; j < t; j++)
            {
                cur = cur + c;

                posA.Add(cur);
            }

            cur = Convert.ToInt32(cur + t);
        }

        cur = 0;

        for (int i = 0; i < m; i++)
        {
            var vt = sr.ReadLine().Split(' ');
            var v = int.Parse(vt[0]);
            var t = int.Parse(vt[1]);

            var c = v / t;
            
            for (int j = 0; j < t; j++)
            {
                cur = cur + c;
                
                posB.Add(cur);
            }

            cur = Convert.ToInt32(cur + t);
        }

        var first = posA[0] > posB[0] ? 'A' : 'B';

        var cnt = 1;

        for(var i = 1; i < posA.Count; i++)
        {
            if(posA[i] > posB[i])
            {
                if(first == 'A') continue;

                first = 'A';
                cnt++;
            }
            else if(posA[i] < posB[i])
            {
                if(first == 'B') continue;

                first = 'B';
                cnt++;
            }
        }

        sb.Append($"{cnt}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}