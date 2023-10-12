/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassSessionBeacon : NSObject {
    DMFControlSessionIdentifier * _advertisedIdentifier;
    bool  _advertising;
    unsigned short  _flags;
}

@property (nonatomic, readonly, copy) DMFControlSessionIdentifier *advertisedIdentifier;
@property (getter=isAdvertising, nonatomic, readonly) bool advertising;
@property (nonatomic) unsigned short flags;

- (void).cxx_destruct;
- (id)advertisedIdentifier;
- (unsigned short)flags;
- (bool)isAdvertising;
- (void)setFlags:(unsigned short)arg1;
- (void)startAdvertisingClassSessionWithIdentifier:(id)arg1;
- (void)startAdvertisingWithUUID:(id)arg1 IPAddress:(unsigned int)arg2;
- (void)stopAdvertising;

@end
