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

        var result = 1;
        var curR = 0;
        var curC = 0;
        var cur = 0;
        var start = arr[curR, curC];

        if(start == arr[r - 1, c - 1])
        {
            Console.WriteLine("0");
            return;
        }

        for(var k = 1; k < r - 1; k++)
        {
            cur = 0;

            for(var i = curR + 1; i < r - 1; i++)
            {
                for(var j = curC + 1; j < c - 1; j++)
                {
                    if(start != arr[i, j])
                    {
                        curR = i;
                        curC = j;
                        cur++;
                    }
                }

                if(cur > 0)
                {
                    start = arr[curR, curC];
                    result *= cur;
                    break;
                }
            }
        }
        
        sb.Append($"{result}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}