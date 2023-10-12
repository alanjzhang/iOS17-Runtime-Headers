/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MTLSimDriver.framework/MTLSimDriver
 */

@interface MTLSimIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {
    unsigned long long  _alignment;
    bool  _bufferLayoutMatchesFrontEndLayout;
    MTLSimDevice * _device;
    unsigned long long  _encodedLength;
    unsigned int  _reference;
}

@property (readonly) unsigned int argumentBufferLayoutRef;

- (unsigned long long)alignment;
- (unsigned int)argumentBufferLayoutRef;
- (bool)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)encodedLength;
- (id)initWithDevice:(id)arg1 reference:(unsigned int)arg2 data:(struct { unsigned short x1; short x2; int x3; }*)arg3;

@end