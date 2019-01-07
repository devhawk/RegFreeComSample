Module Module1

    Sub Main()
        Dim obj As SideBySideLib.ISideBySideClass = New SideBySideLib.SideBySideClassClass
        Console.WriteLine(obj.Version())
        Console.ReadLine()
    End Sub

End Module
