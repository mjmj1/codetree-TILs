using System;
using System.IO;
using System.Text;

public class Codetree
{
    public static void Main()
    {
        StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        StringBuilder sb = new StringBuilder();

        int prev = 1001;
        int cnt = 1;
        int max = 0;

        var line = sr.ReadLine().Split(' ');
        int n = int.Parse(line[0]);
        int t = int.Parse(line[1]);
        
        var xx = sr.ReadLine().Split(' ');

        foreach (var a in xx)
        {
            var x = int.Parse(a);

            if(x < t) continue;

            if(x > prev)
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            if(cnt > max)
            {
                max = cnt;
            }

            prev = x;
        }

        sb.Append($"{max}"); 
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}