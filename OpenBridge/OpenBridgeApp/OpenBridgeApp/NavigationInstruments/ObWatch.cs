///////////////////////////////////////////////////////////
//  ObWatch.cs
//  Implementation of the Class ObWatch
//  Generated by Enterprise Architect
//  Created on:      28-Feb-2024 20:15:45
//  Original author: ØyvindMisje
///////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Text;
using System.IO;



namespace OpenBridgeApp.NavigationInstruments 
{
	public class ObWatch 
    {
		public bool HideAllTickmarks;
        public bool Off;
        public int Width;

		public ObWatch()
        {
            HideAllTickmarks = false;
            Off = false;
            Width = 300;
        }

		~ObWatch()
        {
		}

	}//end ObWatch

}//end namespace NavigationInstruments
