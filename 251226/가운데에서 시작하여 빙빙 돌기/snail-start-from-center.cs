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

        var dx = new int[4] { 1, 0, -1, 0 };
        var dy = new int[4] { 0, -1, 0, 1 };

        var n = int.Parse(sr.ReadLine());

        var grid = new int[n,n];
        var center = n / 2;
        var curX = center;
        var curY = center;
        var dir = 0;
        var idx = 1;
        var r = 1;

        grid[center, center] = idx++;

        while(idx < n * n)
        {
            for(var j = 0; j < 2; j++)
            {
                for(var k = 0; k < r; k++)
                {
                    if(idx > n * n) break;

                    curX += dx[dir];
                    curY += dy[dir];

                    grid[curY, curX] = idx++;
                }

                dir = (dir + 1) % 4;
            }

            r++;
        }
        
        for(var i = 0; i < n; i++)
        {
            for(var j = 0; j < n; j++)
            {
                sb.Append($"{grid[i, j]} ");
            }

            sb.Append("\n");
        }
        
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}