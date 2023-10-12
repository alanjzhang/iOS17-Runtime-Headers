/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface CRVectorTimestampElement : NSObject <NSSecureCoding> {
    unsigned long long  _clock;
    unsigned long long  _subclock;
}

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

- (unsigned long long)clock;
- (void)setClock:(unsigned long long)arg1;
- (void)setSubclock:(unsigned long long)arg1;
- (unsigned long long)subclock;

// CRVectorTimestampElement (RemindersAdditions)

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)rem_compareToVectorTimestampElement:(id)arg1;

@end
