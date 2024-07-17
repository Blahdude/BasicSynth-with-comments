/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "PluginProcessor.h"
#include "ui/OscillatorUI.h"
#include "ui/ADSRUI.h"
#include "ui/FilterUI.h"

//==============================================================================
/**
*/
# creates a new class called basic synth audio processor editor
# new class inherits juce framework's audio processor editor
# this class navigates the gui part of the plugin, which controls the audio part
class BasicSynthAudioProcessorEditor  : public juce::AudioProcessorEditor {
public:
    # this is a class constructor
    # it is creating an instance of a class using an instance of the audio class
    # this is where the gui and audio initially interact
    BasicSynthAudioProcessorEditor (BasicSynthAudioProcessor&);
    # this is the destructor
    # this cleans up the class once it is no longer used
    # it releases dynamically stored memory and other class instances
    ~BasicSynthAudioProcessorEditor();

    
private:
    
    BasicSynthAudioProcessor& processor;
    
    OscillatorUI m_OscGUI;
    M_ADSR m_adsrGUI;
    Filter m_filterGUI;
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BasicSynthAudioProcessorEditor)
};
