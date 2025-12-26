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

        int[] dx = { 0, 1, 0, -1 };
        int[] dy = { -1, 0, 1, 0 };

        var inputs = sr.ReadLine().Split(' ');
        var cmd = sr.ReadLine();
        
        var n = int.Parse(inputs[0]);
        var t = int.Parse(inputs[1]);

        var grid = new int[n,n];

        for(var i = 0; i < n; i++)
        {
            var line = sr.ReadLine().Split(' ');
            
            for(var j = 0; j < n; j++)
            {
                grid[i, j] = Convert.ToInt32(line[j]);
            }
        }
        
        var center = n / 2;
        var x = center;
        var y = center;

        var cur = grid[y, x];
        var rot = 0;

        for(var i = 0; i < cmd.Length; i++)
        {
            // Console.WriteLine($"{i}: x:{x}|y:{y}|rot:{rot}");
            
            if (cmd[i] == 'L')
            {
                rot = (rot + 3) % 4;
            }
            else if (cmd[i] == 'R')
            {
                rot = (rot + 1) % 4;
            }
            else
            {
                var tx = x + dx[rot];
                var ty = y + dy[rot];
                
                if(tx >= n || tx < 0) continue;
                if(ty >= n || ty < 0) continue;
                
                x = tx;
                y = ty;

                cur += grid[y, x];
            }
        }
        
        sb.Append($"{cur}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}