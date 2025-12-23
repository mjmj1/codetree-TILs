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

        var firstLine = sr.ReadLine().Split(' ');
        int n = int.Parse(firstLine[0]);
        int m = int.Parse(firstLine[1]);

        int[] posA = new int[1000];
        int[] posB = new int[1000];
        int meet = -1;

        int cur = 500;
        int offset = 0;

        // A의 이동 정보 입력
        for (int i = 0; i < n; i++)
        {
            var inputs = sr.ReadLine().Split(' ');
            string dir = inputs[0];
            int time = int.Parse(inputs[1]);

            int sign = 0;
            if (dir == "L") sign = -1;
            else if (dir == "R") sign = 1;

            for(var j = offset; j < offset + time; j++)
            {
                cur += sign;
                posA[j] = cur;
            }

            offset = offset + time;
        }

        cur = 500;
        offset = 0;

        // B의 이동 정보 입력
        for (int i = 0; i < m; i++)
        {
            var inputs = sr.ReadLine().Split(' ');
            string dir = inputs[0];
            int time = int.Parse(inputs[1]);

            int sign = 0;
            if (dir == "L") sign = -1;
            else if (dir == "R") sign = 1;

            for(var j = offset; j < offset + time; j++)
            {
                cur += sign;
                posB[j] = cur;
            }

            offset = offset + time;
        }

        for(var i = 0; i < posA.Length; i++)
        {
            if(posA[i] == 0) break;

             if(posA[i] == posB[i])
            {
                meet = i + 1;

                break;
            }
        }

        // 4. 결과 출력
        sb.Append($"{meet}"); 
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}