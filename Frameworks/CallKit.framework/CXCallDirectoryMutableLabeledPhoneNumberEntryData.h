/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData <NSCopying> {
    NSMutableDictionary * _labelToLabelDataOffset;
    NSMutableData * _mutableLabelData;
    NSMutableData * _mutablePhoneNumberData;
}

@property (nonatomic, retain) NSMutableDictionary *labelToLabelDataOffset;
@property (nonatomic, retain) NSMutableData *mutableLabelData;
@property (nonatomic, retain) NSMutableData *mutablePhoneNumberData;

- (void).cxx_destruct;
- (bool)appendPhoneNumber:(long long)arg1 label:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)labelToLabelDataOffset;
- (id)mutableLabelData;
- (id)mutablePhoneNumberData;
- (void)setLabelToLabelDataOffset:(id)arg1;
- (void)setMutableLabelData:(id)arg1;
- (void)setMutablePhoneNumberData:(id)arg1;

@end
