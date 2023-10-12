/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCoreDataXPCMessage : NSObject <NSCoding, NSSecureCoding> {
    bool  _allowAncillary;
    NSString * _contextName;
    NSString * _contextTransactionAuthor;
    NSData * _messageBody;
    unsigned long long  _messageCode;
    NSString * _processName;
    NSString * _token;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end