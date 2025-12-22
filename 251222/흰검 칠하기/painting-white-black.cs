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


        const int OFFSET = 100000;

        int[] color = new int[200002]; 
        int[] whiteCnt = new int[200002];
        int[] blackCnt = new int[200002];

        int cur = OFFSET; // left : 99_999, right: 100_001

        int n = int.Parse(sr.ReadLine());

        for (int i = 0; i < n; i++)
        {
            string[] parts = sr.ReadLine().Split(' ');

            int value = int.Parse(parts[0]);
            string type = parts[1];

            if (type == "L")
            {
                for (int j = 0; j < value; j++)
                {
                    int idx = cur - j;

                    if (color[idx] == 3) continue; 

                    whiteCnt[idx]++;
                    
                    if (whiteCnt[idx] >= 2 && blackCnt[idx] >= 2) 
                        color[idx] = 3;
                    else 
                        color[idx] = 1;
                }
                
                cur = cur - value + 1;
            }
            else 
            {
                for (int j = 0; j < value; j++)
                {
                    int idx = cur + j;

                    if (color[idx] == 3) continue;

                    blackCnt[idx]++;

                    if (whiteCnt[idx] >= 2 && blackCnt[idx] >= 2) 
                        color[idx] = 3;
                    else 
                        color[idx] = 2;
                }
                
                cur = cur + value - 1;
            }
        }

        int w = 0;
        int b = 0;
        int g = 0;

        foreach(var c in color)
        {
            switch(c)
            {
                case 1:
                    w++;
                    break;
                case 2:
                    b++;
                    break;
                case 3:
                    g++;
                    break;
            }
        }

        sb.Append(w + " " + b + " " + g);

        sw.Write(sb);
        sr.Close();
        sw.Close();
    }
}

