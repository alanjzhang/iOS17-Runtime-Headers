/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXMIDIDeviceEntity : NSObject {
    NSMutableSet * _destinations;
    AXMIDIDevice * _device;
    unsigned int  _midiEntity;
    NSMutableSet * _sources;
    NSNumber * _supportsMMC;
}

@property (nonatomic, retain) NSMutableSet *destinations;
@property (nonatomic) AXMIDIDevice *device;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSString *driverName;
@property (nonatomic, readonly) NSNumber *isBroadcast;
@property (nonatomic, readonly) NSNumber *isEmbedded;
@property (nonatomic, readonly) NSNumber *isOffline;
@property (nonatomic, readonly) NSNumber *isPrivate;
@property (nonatomic) unsigned int midiEntity;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSMutableSet *sources;
@property (nonatomic, readonly) NSNumber *supportsGeneralMIDI;
@property (nonatomic, readonly) NSNumber *supportsMMC;
@property (nonatomic, readonly) NSNumber *uniqueID;

- (void).cxx_destruct;
- (id)_destinationForMidiEndpoint:(unsigned int)arg1 addIfNeeded:(bool)arg2;
- (id)_sourceForMidiEndpoint:(unsigned int)arg1 addIfNeeded:(bool)arg2;
- (void)addMidiDestination:(unsigned int)arg1;
- (void)addMidiSource:(unsigned int)arg1;
- (id)description;
- (id)destinations;
- (id)device;
- (id)deviceID;
- (id)driverName;
- (id)initWithMIDIEntity:(unsigned int)arg1 device:(id)arg2;
- (id)isBroadcast;
- (id)isEmbedded;
- (id)isOffline;
- (id)isPrivate;
- (unsigned int)midiEntity;
- (id)name;
- (void)removeMidiDestination:(unsigned int)arg1;
- (void)removeMidiSource:(unsigned int)arg1;
- (void)resetAndDetectEndpoints;
- (void)setDestinations:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setMidiEntity:(unsigned int)arg1;
- (void)setSources:(id)arg1;
- (id)sources;
- (id)supportsGeneralMIDI;
- (id)supportsGeneralMMC;
- (id)supportsMMC;
- (id)uniqueID;

@end
