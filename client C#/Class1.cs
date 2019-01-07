using System;

namespace client
{
	/// <summary>
	/// Summary description for Class1.
	/// </summary>
	class Class1
	{
		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main(string[] args)
		{
			SideBySideLib.ISideBySideClass obj = new SideBySideLib.SideBySideClassClass();
			Console.WriteLine(obj.Version());
			Console.ReadLine();
		}
	}
}
