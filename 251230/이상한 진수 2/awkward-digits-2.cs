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

        var n = sr.ReadLine();
        var chars = n.ToCharArray();
        
        for(var i = 0; i < n.Length; i++)
        {
            if(n[i] == '0')
            {
                chars[i] = '1';
                break;
            }
        }

        var s = new string(chars);

        var num = Convert.ToInt32(s, 2);

        sb.Append($"{num}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}