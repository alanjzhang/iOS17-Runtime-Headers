/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOutputSettingsAssistantInternal : NSObject {
    <AVOutputSettingsAssistantBaseSettingsProvider> * baseSettingsProvider;
    struct opaqueCMFormatDescription { } * sourceAudioFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  sourceVideoAverageFrameDuration;
    struct opaqueCMFormatDescription { } * sourceVideoFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  sourceVideoMinFrameDuration;
    NSDictionary * videoEncoderSpecification;
    <AVOutputSettingsAssistantVideoSettingsAdjuster> * videoSettingsAdjuster;
}

@end
