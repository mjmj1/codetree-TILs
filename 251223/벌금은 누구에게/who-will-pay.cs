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
        int k = int.Parse(firstLine[2]);

        var students = new int[n];
        int student = -1;

        for (int i = 0; i < m; i++)
        {
            var p = int.Parse(sr.ReadLine());
            
            students[p - 1]++;

            if (students[p - 1] >= k)
            {
                student = p;
                
                break;
            }
        }

        // 4. 결과 출력
        sb.Append($"{student}"); 
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}