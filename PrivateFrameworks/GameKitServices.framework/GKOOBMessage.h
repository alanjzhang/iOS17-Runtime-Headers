/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKOOBMessage : NSObject {
    unsigned short  _type;
}

@property (readonly) unsigned short type;

- (bool)_checkSize:(unsigned long long)arg1;
- (bool)_checkType:(unsigned short)arg1;
- (id)data;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithMessageType:(unsigned short)arg1;
- (unsigned short)type;

@end
