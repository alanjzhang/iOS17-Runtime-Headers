/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUVMRegionRangeInfo : NSObject {
    unsigned long long  address;
    unsigned long long  size;
    unsigned long long  stackIdentifier;
    unsigned int  userTag;
}

@property unsigned long long address;
@property (readonly) struct _VMURange { unsigned long long x1; unsigned long long x2; } range;
@property unsigned long long size;
@property unsigned long long stackIdentifier;
@property unsigned int userTag;

- (unsigned long long)address;
- (id)init;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })range;
- (void)setAddress:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStackIdentifier:(unsigned long long)arg1;
- (void)setUserTag:(unsigned int)arg1;
- (unsigned long long)size;
- (unsigned long long)stackIdentifier;
- (unsigned int)userTag;

@end
