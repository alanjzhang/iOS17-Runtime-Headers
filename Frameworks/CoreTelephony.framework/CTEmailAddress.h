/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTEmailAddress : NSObject <CTMessageAddress, NSCopying> {
    NSString * _address;
}

@property (readonly) NSString *address;

+ (id)emailAddress:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (id)canonicalFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodedString;
- (id)initWithAddress:(id)arg1;

@end
