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
        var r = int.Parse(inputs[0]);
        var c = int.Parse(inputs[1]);

        var arr = new char[r,c];
        for(var i = 0; i < r; i++)
        {
            var line = sr.ReadLine().Split(' ');
            for(var j = 0; j < c; j++)
            {
                var ch = line[j][0];
                arr[i,j] = ch;
            }
        }

        var result = 0;
        var curR = 0;
        var curC = 0;
        var start = arr[curR, curC];

        if(start == arr[r - 1, c - 1])
        {
            sb.Append($"{result}");
            sw.Write(sb);

            sr.Close();
            sw.Close();
            return;
        }

        for(var i = curR + 1; i < r - 2; i++)
        {
            for(var j = curC + 1; j < c - 2; j++)
            {
                if(start == arr[i, j]) continue;

                for(var k = i + 1; k < r - 1; k++)
                {
                    for(var l = j + 1; l < c - 1; l++)
                    {
                        if(arr[k, l] == arr[i, j]) continue;

                        result++;
                    }
                }
            }
        }
        
        sb.Append($"{result}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}