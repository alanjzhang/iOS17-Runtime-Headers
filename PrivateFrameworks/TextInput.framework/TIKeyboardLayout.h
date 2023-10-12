/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardLayout : NSObject <NSSecureCoding> {
    unsigned long long  _count;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    struct _ShortRect { short x1; short x2; short x3; short x4; } * _frames;
    unsigned long long  _framesCapacity;
    char * _strings;
    unsigned long long  _stringsCapacity;
    unsigned long long  _stringsSize;
    bool  _usesTwoHands;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool usesTwoHands;

+ (bool)supportsSecureCoding;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_decodeCGRectForKey:(id)arg1 withDecoder:(id)arg2;
- (void)_encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2 withCoder:(id)arg3;
- (void)addKeyWithExactString:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)addKeyWithString:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)ensureFrameCapacity:(unsigned long long)arg1;
- (void)ensureStringCapacity:(unsigned long long)arg1;
- (void)enumerateKeysUsingBlock:(id /* block */)arg1;
- (const char *)firstKeyString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)keyContainingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUsesTwoHands:(bool)arg1;
- (bool)usesTwoHands;

@end
