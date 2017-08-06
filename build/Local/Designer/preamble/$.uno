using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
using Outracks.Simulator.Runtime;
namespace Outracks.Simulator 
{ 
	public class GeneratedApplication : Outracks.Simulator.Client.Application
	{
		public GeneratedApplication()
			: base(
				new [] 
<<<<<<< HEAD
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("10.0.17.164"), 12124)},"/Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/gadden.unoproj",new string[] 
=======
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.1.224"), 12124)},"/Users/star-destryer/Documents/github/gadden/gadden.unoproj",new string[] 
>>>>>>> 1b78b750525f1c14d0676759d68b214d8813e7b4
				{ })
		{
			Runtime.Bundle.Initialize("gadden");

			if defined(DotNet)
				Reflection = new UnoHostReflection();
			if defined(CPLUSPLUS)
				Reflection = new NativeReflection(new SimpleTypeMap());
		}
	}
}