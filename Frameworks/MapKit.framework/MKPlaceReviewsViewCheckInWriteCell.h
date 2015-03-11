/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceReviewsViewCheckInWriteCellDelegate>, NSAttributedString, NSMutableArray, UILabel;

@interface MKPlaceReviewsViewCheckInWriteCell : UITableViewCell {
    UILabel *_checkInLabel;
    <MKPlaceReviewsViewCheckInWriteCellDelegate> *_delegate;
    NSMutableArray *_scaledConstraints;
    UILabel *_writeReviewLabel;
}

@property(retain) NSAttributedString * checkInTitle;
@property <MKPlaceReviewsViewCheckInWriteCellDelegate> * delegate;
@property(retain) NSMutableArray * scaledConstraints;
@property(retain) NSAttributedString * writeReviewTitle;

+ (float)intrinsicContentHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)cellTapped:(id)arg1;
- (id)checkInTitle;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)newLabel;
- (id)scaledConstraints;
- (void)setCheckInTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScaledConstraints:(id)arg1;
- (void)setWriteReviewTitle:(id)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (id)updatedAttributedString:(id)arg1 onlyUpdateColor:(BOOL)arg2;
- (id)writeReviewTitle;

@end