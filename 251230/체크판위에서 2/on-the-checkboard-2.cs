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

        var inputs = sr.ReadLine().Split(' ');
        var r = int.Parse(inputs[0]);
        var c = int.Parse(inputs[1]);

        var arr = new int[r,c];
        for(var i = 0; i < r; i++)
        {
            arr[i] = sr.ReadLine().Split(' ').Select(int.Parse).ToArray()'
        }
        
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}