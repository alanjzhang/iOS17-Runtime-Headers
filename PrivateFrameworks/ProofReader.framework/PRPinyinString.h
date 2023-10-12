/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRPinyinString : NSPinyinString {
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _finalRanges;
    unsigned long long  _modificationCount;
    unsigned long long * _modificationTypes;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _originalAdditionalSyllableRanges;
    unsigned long long  _originalCheckedLength;
    unsigned long long  _originalLength;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _originalRanges;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _originalSyllableRanges;
}

+ (id)alternativesForInputString:(id)arg1;
+ (id)correctionsForInputString:(id)arg1;
+ (id)prefixesForInputString:(id)arg1;

- (id)annotatedString;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)finalCheckedLength;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })finalRangeForModificationAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfFirstModification;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 finalModificationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 finalModificationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8 originalSyllableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg9;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 modificationType:(unsigned long long)arg6 originalModificationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 finalModificationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8 originalSyllableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg9 originalAdditionalSyllableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg10;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 originalLength:(unsigned long long)arg5 originalCheckedLength:(unsigned long long)arg6 numberOfModifications:(unsigned long long)arg7 modificationTypes:(unsigned long long*)arg8 originalModificationRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg9 finalModificationRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg10 originalSyllableRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg11 originalAdditionalSyllableRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg12;
- (id)initWithUncheckedString:(id)arg1 score:(unsigned long long)arg2 originalLength:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)lastSyllableIsPartial;
- (unsigned long long)length;
- (id)nonPinyinIndexSet;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nonPinyinRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDeletions;
- (unsigned long long)numberOfInsertions;
- (unsigned long long)numberOfModifications;
- (unsigned long long)numberOfNonPinyinRanges;
- (unsigned long long)numberOfReplacements;
- (unsigned long long)numberOfTranspositions;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originalAdditionalSyllableRangeForModificationAtIndex:(unsigned long long)arg1;
- (unsigned long long)originalCheckedLength;
- (unsigned long long)originalLength;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originalRangeForModificationAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })originalSyllableRangeForModificationAtIndex:(unsigned long long)arg1;
- (unsigned long long)score;
- (id)string;
- (unsigned long long)syllableCount;
- (unsigned long long)typeOfModificationAtIndex:(unsigned long long)arg1;

@end
