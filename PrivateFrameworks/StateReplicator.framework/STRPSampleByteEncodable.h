/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StateReplicator.framework/StateReplicator
 */

@interface STRPSampleByteEncodable : NSObject <NSSecureCoding> {
    struct MyCoolStruct { 
        bool aBool; 
        unsigned int smolInt; 
        unsigned char someOptions; 
        unsigned long long anInt; 
    }  _aStruct;
}

@property (nonatomic, readonly) struct MyCoolStruct { bool x1; unsigned int x2; unsigned char x3; unsigned long long x4; } aStruct;

+ (bool)supportsSecureCoding;

- (struct MyCoolStruct { bool x1; unsigned int x2; unsigned char x3; unsigned long long x4; })aStruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStruct:(struct MyCoolStruct { bool x1; unsigned int x2; unsigned char x3; unsigned long long x4; })arg1;
- (bool)isEqual:(id)arg1;

@end
