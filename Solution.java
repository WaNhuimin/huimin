/**
 * @ClassName Solution
 * @Description TODO
 * Author asus
 * @Data 2019-7-28 17:53
 * @Version 1.0
 **/
public class Solution {
    //将一个链表逆置，也就是反转
    /*
    思路：遍历原来的链表，定义一个新链表，不断地对原链表元素进行头插
     */
    public Node reverseList(Node head) {
        Node result = null;
        Node cur = head;
        while (cur != null) {
            Node next = cur.next;
            cur.next = result;
            result = cur;
            cur = next;
        }
        return result;
    }

    //删除链表中给定值val的所有结点
    /*
    思路：方法一：定义一个新的链表，遍历原链表，把原链表中所有与val的值不同的结点不断地尾插到新链表中
          方法二：遍历原链表，遇到与val值相同的直接删除，让指向相同val值的结点指向他的下一个结点
     */
    public Node removeElements(Node head, int val) {
        Node result = null;
        Node last = null;   // 记录目前 result 中的最后一个结点
        Node cur = head;
        while (cur != null) {
            if (cur.val == val) {
                cur = cur.next;
                continue;
            }
            Node next = cur.next;
            cur.next = null;
            if (result == null) {
                result = cur;
            } else {
                last.next = cur;
            }
            last = cur;
            cur = next;
        }
        return result;
    }

//返回链表的中间结点，如果有两个则返回第二个中间结点
//输入一个链表，输出该链表的倒数第k个结点
//将两个有序链表合并成新的有序链表并返回
//链表的回文结构
//以定值x为基准将链表分割为两部分，所有小于x的结点排在大于等于x结点的前面
    /*遍历整个链表，把小于X的尾插到一个小链表中，大于等于X的尾插到一个大链表中
      记录插入大链表和小链表的最后一个；
      需要考虑特殊情况，如果没有比x小的数，则返回大链表；
     */

    //在一个排序的链表中删除重复的结点，重复的结点不保留
    /*
    相等：p2继续走，直到不相等为止，此时p1和pre不动；
         如果第一个结点就是要删除的结点，那么head=p2;
         如果不是第一个，则要删除的是[p1,p2)之间的数，p1=p2,p2=p2.next
    不相等:pre=p1;p1=p2;p2=p2.next;
     */

//输入两个链表，返回他们的第一个公共结点
    /*
    思路：让长的链表先走（长链表的长度-短链表）之差步，然后再同时遍历两个链表，
          第一个结点位置相同的地方即为他们的第一个公共点
     */
    private int getLength1(Node head) {
        Node cur = head;
        int len = 0;
        for (cur = head; cur != null; cur = cur.next) {
            len++;
        }
        return len;

    }

    public Node getIntersectionNode(Node headA, Node headB) {
        Node longer = headA;
        Node shorter = headB;
        int lenA = getLength1(headA);
        int lenB = getLength1(headB);
        int diff = lenA - lenB;
        if (lenA < lenB) {
            longer = headB;
            shorter = headA;
            diff = lenB - lenA;
        }
        for (int i = 0; i < diff; i++) {
            longer = longer.next;
        }
        while (longer != shorter) {
            longer = longer.next;
            shorter = shorter.next;
        }
        return longer;
    }
    //给定一个链表，返回链表开始入环的第一个结点，如果无环，换回null
/*
快慢指针
法一：把带环转为相交问题
       把相遇点.next置为null,则问题就转换为找两个链表的公共结点问题*/

    private int getLength2(Node head) {
        int len = 0;
        for (Node c = head; c != null; c = c.next) {
            len++;
        }

        return len;
    }

    public Node detectCycle1(Node head) {

        Node fast = head;
        Node slow = head;
        do {
            if (fast == null) {
                return null;
            }
            fast = fast.next;
            if (fast.next == null)
                return null;
            fast = fast.next;
            slow = slow.next;
        }
        while (fast != slow);
        Node headB = fast.next;
        fast = null;
        Node headA = head;
        int lenA = getLength2(headA);
        int lenB = getLength2(headB);
        Node longer = headA;
        Node shorter = headB;
        int diff = lenA - lenB;
        if (lenA < lenB) {
            longer = headB;
            shorter = headA;
            diff = lenB - lenA;
        }
        for (int i = 0; i < diff; i++) {
            longer = longer.next;
        }

        while (longer != shorter) {
            longer = longer.next;
            shorter = shorter.next;
        }

        return longer;
    }

    /*法二：一个引用从起点出发，一个引用从相遇点出发，一定会在环的入口点相遇
          证明：
         快引用一次走两步，慢引用一次走一步；
         慢引用走的距离为没有环的部分+在环里走的距离，即L+C;
         快引用走的距离为L+C+（n+1)R;
         快引用走的距离为2*（L+C）;
     */
    public Node detectCycle2(Node head) {
        Node fast = head;
        Node slow = head;
        do {
            if (fast == null) {
                return null;
            }
            fast = fast.next;
            if (fast.next == null)
                return null;
            fast = fast.next;
            slow = slow.next;
        }
        while (fast != slow);
        fast = head;
        while (slow != fast) {
            fast = fast.next;
            slow = slow.next;
        }
        return slow;
    }


//给定一个链表，每个结点包含一个额外增加的随机指针，该指针可以指向链表中的任何结点或空节点，要求返回该链表的深度拷贝
    /*
    先把原链表1 2 3 4 5拷贝成1 1 2 2 3 3 4 4 5 5的形式
    定义两个指针p1、p2，分别指向head和head.next,通过原来元素的随机指针找到复制后元素的随机指针
    然后把链表拆开分成两个两个链表
     */
}