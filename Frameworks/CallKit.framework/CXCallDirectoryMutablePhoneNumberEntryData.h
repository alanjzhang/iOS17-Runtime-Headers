/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying> {
    NSMutableData * _mutablePhoneNumberData;
}

@property (nonatomic, retain) NSMutableData *mutablePhoneNumberData;

- (void).cxx_destruct;
- (void)appendPhoneNumber:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)mutablePhoneNumberData;
- (void)setMutablePhoneNumberData:(id)arg1;

@end
