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

        var n = int.Parse(sr.ReadLine());
        var line = sr.ReadLine().Split(' ');

        var arr = new int[n];
        for(var i = 0; i < n; i++)
        {
            arr[i] = int.Parse(line[i]);
        }

        var min = int.MaxValue;

        for(var i = 0; i < n; i++)
        {
            var cur = 0;

            for(var j = 0; j < n; j++)
            {
                var dis = Math.Abs(i - j);
                cur += dis * arr[j];
            }

            min = Math.Min(min, cur);
        }
        
        sb.Append($"{min}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}