/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EMTAlternativeSelectionSpan : NSObject <NSCopying> {
    NSArray * _alternatives;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _projection;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _source;
}

@property (nonatomic, readonly) NSArray *alternatives;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } projection;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } source;

- (void).cxx_destruct;
- (id)alternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSource:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 projection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 alternatives:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })projection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })source;

@end
