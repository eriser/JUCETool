/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class JucetoolAudioProcessorEditor  : public AudioProcessorEditor, private Slider::Listener
{
public:
    JucetoolAudioProcessorEditor (JucetoolAudioProcessor&);
    ~JucetoolAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics& g) override;
    void resized() override;

	void sliderValueChanged(Slider* slider) override;

	Slider midiVolume;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JucetoolAudioProcessor& processor;

//	Slider midiVolume;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JucetoolAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED
