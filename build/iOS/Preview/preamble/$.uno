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
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("10.168.98.40"), 12124)},"/Users/ericaglimsholt/Documents/Skola/Handelsmarketing/Gadden/gadden/gadden.unoproj",new string[] 
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