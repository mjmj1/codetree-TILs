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

        int prev = -1;
        int max = 0;
        int cnt = 1;

        int n = int.Parse(sr.ReadLine());

        for (int i = 0; i < n; i++)
        {
            var x = int.Parse(sr.ReadLine());

            if(prev == x)
            {
                cnt++;
            }
            else
            {
                if(cnt > max)
                {
                    max = cnt;
                }

                cnt = 1;
            }

            prev = x;
        }

        sb.Append($"{max}");

        // 6. 최종 출력 및 닫기
        sw.Write(sb);
        sw.Close();
        sr.Close();
    }
}
