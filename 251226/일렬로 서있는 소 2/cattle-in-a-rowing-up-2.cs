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

        var cnt = 0;

        for(var i = 0; i < n; i++)
        {
            for(var j = i + 1; j < n; j++)
            {
                if(arr[j] < arr[i]) continue;

                for(var k = j + 1; k < n; k++)
                {
                    if(arr[k] < arr[j]) continue;

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