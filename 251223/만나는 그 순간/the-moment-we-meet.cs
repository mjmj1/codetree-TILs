using System;
using System.IO;
using System.Text;
using System.Collections.Generic;

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

        var posA = new List<int>();
        var posB = new List<int>();
        int meet = -1;

        int cur = 0;

        // A의 이동 정보 입력
        for (int i = 0; i < n; i++)
        {
            var inputs = sr.ReadLine().Split(' ');
            string dir = inputs[0];
            int time = int.Parse(inputs[1]);

            int sign = 0;
            if (dir == "L") sign = -1;
            else if (dir == "R") sign = 1;

            for(var j = 0; j < time; j++)
            {
                cur += sign;
                posA.Add(cur);
            }
        }

        cur = 0;

        // B의 이동 정보 입력
        for (int i = 0; i < m; i++)
        {
            var inputs = sr.ReadLine().Split(' ');
            string dir = inputs[0];
            int time = int.Parse(inputs[1]);

            int sign = 0;
            if (dir == "L") sign = -1;
            else if (dir == "R") sign = 1;

            for(var j = 0; j < time; j++)
            {
                cur += sign;
                posB.Add(cur);
            }
        }

        for(var i = 0; i < posA.Count; i++)
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