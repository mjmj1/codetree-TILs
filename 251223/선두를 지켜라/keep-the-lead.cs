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

        var posA = new List<float>();
        var posB = new List<float>();

        var cur = 0;

        for (int i = 0; i < n; i++)
        {
            var vt = sr.ReadLine().Split(' ');
            var v = int.Parse(vt[0]);
            var t = int.Parse(vt[1]);
            
            for (int j = 0; j < t; j++)
            {
                cur = cur + v;

                posA.Add(cur);
            }
        }

        cur = 0;

        for (int i = 0; i < m; i++)
        {
            var vt = sr.ReadLine().Split(' ');
            var v = int.Parse(vt[0]);
            var t = int.Parse(vt[1]);

            for (int j = 0; j < t; j++)
            {
                cur = cur + v;
                
                posB.Add(cur);
            }
        }

        var first = ' ';
        
        if(posA[0] > posB[0]) first = 'A';
        else if(posA[0] < posB[0]) first = 'B';

        var cnt = 0;

        for(var i = 1; i < posA.Count; i++)
        {
            if(posA[i] > posB[i])
            {
                if(first == 'A') continue;

                if(first != ' ') cnt++;
                first = 'A';
            }
            else if(posA[i] < posB[i])
            {
                if(first == 'B') continue;

                if(first != ' ') cnt++;
                first = 'B';
            }
        }

        sb.Append($"{cnt}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}