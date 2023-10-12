/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSAttributedStringReplacement : NSObject {
    id  _argument;
    long long  _index;
    long long  _replacementKind;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRangeInResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _specifierRangeInFormatString;
}

@property (readonly) id argument;
@property (readonly) long long index;
@property (readonly) long long replacementKind;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } replacementRangeInResult;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } specifierRangeInFormatString;

+ (id)_replacementsFromMetadataArray:(id)arg1;

- (id)_initWithMetadata:(id)arg1;
- (id)argument;
- (void)dealloc;
- (long long)index;
- (id)initWithIndex:(long long)arg1 specifierRangeInFormatString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementRangeInResult:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 replacementKind:(long long)arg4 argument:(id)arg5;
- (long long)replacementKind;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })replacementRangeInResult;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })specifierRangeInFormatString;

@end
