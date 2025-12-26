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

        var arr = new int[n, n];

        for(var i = 0; i < n; i++)
        {
            var line = sr.ReadLine().Split(' ');

            for(var j = 0; j < n; j++)
            {
                arr[i, j] = int.Parse(line[j]);
            }
        }

        var max = int.MinValue;

        for(var i = 0; i < n; i++)
        {
            for(var j = 0; j < n - 2; j++)
            {
                var cnt = arr[i, j] + arr[i, j + 1] + arr[i, j + 2];
                max = Math.Max(max, cnt);
            }
        }

        sb.Append($"{max}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}