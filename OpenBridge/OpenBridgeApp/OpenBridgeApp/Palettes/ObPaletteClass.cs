///////////////////////////////////////////////////////////
//  ObPaletteClass.cs
//  Implementation of the Class ObPaletteClass
//  Generated by Enterprise Architect
//  Created on:      26-Feb-2024 16:56:17
//  Original author: ØyvindMisje
///////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using OpenBridgeApp.Palettes;
using OpenBridgeApp.Components.Application;
using Windows.UI;

namespace OpenBridgeApp.Palettes 
{
    public enum ObPaletteType
    {
        Night = 0,
        Dusk,
        Day,
        Bright,
    }

    public enum ObAlertType
    {
        Alarm = 0,
        Warning,
        Caution,
        Running,
        Command,
        Notification,
        Flat,
        None
    }

    public enum ObAutomationType
    {
        DevicePrimary = 0,
        DeviceSecondary,
        DeviceTertiary,
        DevicePrimaryInverted,
        DeviceSecondaryInverted,
        DeviceTertiaryInverted,
        PipePrimary,
        PipeSecondary,
        PipeTertiary,
        PipePrimaryInverted,
        PipeSecondaryInverted,
        PipeTertiaryInverted,
        PipeOverlay,
        PipeDisabled,
        AcidAlkalis,
        AirVentilation,
        FireFighting,
        FlammableGas,
        FreshWater,
        Fuel,
        Masses,
        NonFlammableGas,
        Oil,
        SeaWater,
        Steam,
        WasteMedia
    }

    public enum ObBorderType
    {
        Divider = 0,
        Outline,
        Edge,
        Solid,
        IconOutline
    }

    public enum ObContainerType
    {
        Backdrop = 0,
        Section,
        Background,
        Global,
        Overlay
    }

    public enum ObControlsColorType
    {
        EnabledBakcground = 0,
        EnabledBorder,
        HoverBackground,
        PressedBackground,
        PressedBorder,
        FocusedBackground,
        FocusedBorder,
        DisabledBackground,
        ActivatedBackground,
        ActivatedBoarder,
    }

    public enum ObControlsColorOnType
    {
        Active = 0,
        Neutral,
        Disabled
    }

    public enum ObControlsType
    {
        Normal = 0,
        Raised,
        Indent,
        Flat,
        Selected,
        Thumb,
        Amplified,
        Device,
        Running,
        Caution,
        WArning,
        Alarm,
        Critical
    }

    public enum ObElementType
    {
        Active = 0,
        Neutral,
        Inactive,
        Disabled,
        ActiveInverted,
        NeutralInverted,
        InactiveInverted,
        DisabledInverted,
    }

    public enum ObInstrumentType
    {
        EnhancedPrimary = 0,
        EnhancedSecondary,
        EnhancedTertiary,
        RegularPrimary,
        RegularTertiary,
        FramePrimary,
        FrameSecondary,
        FrameTertiary,
        TickMarkPrimary,
        TickMarkSecondary,
        TickMarkTertiary,
        Starboard,
        Port
    }


    public class ObPaletteClass 
    {
		public ObPaletteType Illumination;

		public ObPaletteClass()
        {
		}

		~ObPaletteClass()
        {
		}

        public static ObPaletteClass CreatePalette(ObPaletteType illumination)
        {
            ObPaletteClass newPalette = new ObPaletteClass();
            newPalette.Illumination = illumination;
            return newPalette;
        }

		public Brush GetColorAlert(ObAlertType typeColor)
        {
			return new SolidColorBrush(Color.FromArgb(255,255,0,0));
		}

		public Brush GetColorAutomation(ObAutomationType colorType)
        {
			return new SolidColorBrush(Color.FromArgb(255, 0, 255, 0));
		}

		public Brush GetColorBorder(ObBorderType colorType)
        {
			return new SolidColorBrush(Color.FromArgb(255, 0, 255, 0));
		}

		public Brush GetColorContainer(ObContainerType colorType)
        {
            return new SolidColorBrush(Color.FromArgb(255, 0, 0, 0));
        }

		public Brush GetColorControls(ObControlsType colorType, ObControlsColorType state)
        {
            return new SolidColorBrush(Color.FromArgb(255, 0, 0, 0));
        }

        public Brush GetColorControlsOn(ObControlsType colorType, ObControlsColorOnType state)
        {
            return new SolidColorBrush(Color.FromArgb(255, 255, 255, 255));
        }

		public Brush GetColorElement(ObElementType typeColor)
        {
            return new SolidColorBrush(Color.FromArgb(255, 255, 255, 255));
        }

		public Brush GetColorInstrument(ObInstrumentType typeColor)
        {
            return new SolidColorBrush(Color.FromArgb(255, 0, 0, 255));
        }

	}//end ObPaletteClass

}//end namespace Palettes
