#using "RagePluginHookSDK.dll"

#include <iostream>
#include <vector>
#include <string>

using namespace std;
using namespace System::Collections::Generic;
using System::String;


using namespace Rage;

namespace test
{    
    
    [assembly:Rage::Attributes::Plugin("C++/CLI RPH plugin", Description = "Example of using Visual Studio Code to create a Rage Plugin Hook plugin in C++/CLI", Author = "tcpie")];

    public ref class test_class
    {
    public:
        static void Main()
        {
            Rage::Game::Console->Print("Hello, World from C++/CLI!");

            while (true)
            {
                Rage::GameFiber::Yield();
            }
        }
    };

    
}