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

        int cur = 100000;
        int[] count = new int[200001];

        int n = int.Parse(sr.ReadLine());

        for (int i = 0; i < n; i++)
        {
            string[] parts = sr.ReadLine().Split(' ');

            int value = int.Parse(parts[0]);
            string type = parts[1];

            if(type == "L")
            {
                var idx = 0;

                for (var j = 0; j < value; j++)
                {
                    idx = cur - j;
                    count[idx] = 1;
                }

                cur = idx;
            }
            else
            {
                var idx = 0;

                for (var j = 0; j < value; j++)
                {
                    idx = cur + j;
                    count[idx] = 2;
                }

                cur = idx;
            }
        }

        int w = 0;
        int b = 0;

        foreach(var c in count)
        {
            switch(c)
            {
                case 1:
                    w++;
                    break;
                case 2:
                    b++;
                    break;
            }
        }

        sb.AppendLine(w + " " + b);

        sw.Write(sb);
        sr.Close();
        sw.Close();
    }
}
