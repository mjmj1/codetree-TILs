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

        int cnt = 0;
        int max = 0;

        var line = sr.ReadLine().Split(' ');
        int n = int.Parse(line[0]);
        int t = int.Parse(line[1]);
        
        var xx = sr.ReadLine().Split(' ');

        for (var i = 0; i < n; i++)
        {
            var x = int.Parse(xx[i]);

            if(x > t)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            if(cnt > max)
            {
                max = cnt;
            }
        }

        sb.Append($"{max}"); 
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}