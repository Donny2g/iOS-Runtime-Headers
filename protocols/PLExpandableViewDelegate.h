/* Generated by RuntimeBrowser.
 */

@protocol PLExpandableViewDelegate <NSObject>

@optional

- (void)expandableView:(PLExpandableView *)arg1 expansionFractionChanged:(float)arg2;
- (void)expandableView:(PLExpandableView *)arg1 willCancelCollapsingWithDuration:(double)arg2;
- (void)expandableView:(PLExpandableView *)arg1 willCancelExpandingWithDuration:(double)arg2;
- (void)expandableView:(PLExpandableView *)arg1 willCompleteCollapsingWithDuration:(double)arg2;
- (void)expandableView:(PLExpandableView *)arg1 willCompleteExpandingWithDuration:(double)arg2;
- (void)expandableViewDidBeginCollapsing:(PLExpandableView *)arg1;
- (void)expandableViewDidCancelCollapsing:(PLExpandableView *)arg1;
- (void)expandableViewDidCancelExpanding:(PLExpandableView *)arg1;
- (void)expandableViewDidCompleteCollapsing:(PLExpandableView *)arg1;
- (void)expandableViewDidCompleteExpanding:(PLExpandableView *)arg1;
- (void)expandableViewWillBeginExpanding:(PLExpandableView *)arg1;

@end
