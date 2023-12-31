/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSPort : NSObject <NSCoding, NSCopying> {
    unsigned long long  _reservedSpaceLength;
    bool  _valid;
}

@property (readonly) unsigned long long reservedSpaceLength;
@property (getter=isValid, readonly) bool valid;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

- (bool)isValid;
- (unsigned long long)reservedSpaceLength;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

// NSPort (NSPort)

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)port;
+ (id)portWithMachPort:(unsigned int)arg1;

- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (Class)classForCoder;
- (Class)classForPortCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (void)invalidate;
- (bool)isValid;
- (unsigned int)machPort;
- (void)removeConnection:(id)arg1 fromRunLoop:(id)arg2 forMode:(id)arg3;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (unsigned long long)reservedSpaceLength;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (void)setDelegate:(id)arg1;

@end
