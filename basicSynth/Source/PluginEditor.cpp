/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
# constructor definition, connecting audio to gui
# creating instances of variabls, passing adding audio to each one
BasicSynthAudioProcessorEditor::BasicSynthAudioProcessorEditor (BasicSynthAudioProcessor& p)
: juce::AudioProcessorEditor (&p), processor (p), m_OscGUI(p), m_adsrGUI(p), m_filterGUI(p) {

    setSize (600, 300);

    # makes visible the gui instances
    addAndMakeVisible(&m_OscGUI);
    addAndMakeVisible(&m_adsrGUI);
    addAndMakeVisible(&m_filterGUI);
}

# desconstructor
# instances will be automatically destroyed, so no extra cleanup is necessary
BasicSynthAudioProcessorEditor::~BasicSynthAudioProcessorEditor() {
}

//==============================================================================
void BasicSynthAudioProcessorEditor::paint (juce::Graphics& g) {
    # filling the background to black
    # more complex GUIs might draw additional elements here like adding images and designs
    g.fillAll(juce::Colours::black); 
}

# ensures that the plugin looks good after being resized
void BasicSynthAudioProcessorEditor::resized() {
    juce::Rectangle<int> area = getLocalBounds();
    
    const int componentWidth = 200;
    const int componentHeight = 200;
    
    m_OscGUI.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    m_adsrGUI.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    m_filterGUI.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));

}


